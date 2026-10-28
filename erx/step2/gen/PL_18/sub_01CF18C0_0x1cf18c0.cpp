#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01CF18C0
// Address: 0x1cf18c0 - 0x1cf1980
void sub_01CF18C0_0x1cf18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF18C0_0x1cf18c0");
#endif

    switch (ctx->pc) {
        case 0x1cf18d4u: goto label_1cf18d4;
        case 0x1cf18e8u: goto label_1cf18e8;
        case 0x1cf18ecu: goto label_1cf18ec;
        case 0x1cf1928u: goto label_1cf1928;
        case 0x1cf1934u: goto label_1cf1934;
        case 0x1cf1940u: goto label_1cf1940;
        case 0x1cf1960u: goto label_1cf1960;
        default: break;
    }

    ctx->pc = 0x1cf18c0u;

    // 0x1cf18c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf18c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf18c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf18c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf18cc: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF18CCu;
    SET_GPR_U32(ctx, 31, 0x1CF18D4u);
    ctx->pc = 0x1CF18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF18CCu;
    // 0x1cf18d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF18CCu, 0x1CF18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF18D4u;
label_1cf18d4:
    // 0x1cf18d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf18d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf18d8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF18D8u;
    {
        const bool branch_taken_0x1cf18d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF18DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18D8u;
        // 0x1cf18dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf18d8) {
            ctx->pc = 0x1CF18FCu;
            goto label_1cf18fc;
        }
    }
    ctx->pc = 0x1CF18E0u;
    // 0x1cf18e0: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF18E0u;
    SET_GPR_U32(ctx, 31, 0x1CF18E8u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF18E0u, 0x1CF18E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF18E8u;
label_1cf18e8:
    // 0x1cf18e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf18e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf18ec:
    // 0x1cf18ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf18ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf18f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf18f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf18f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF18F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18F4u;
        // 0x1cf18f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF18F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF18FCu;
label_1cf18fc:
    // 0x1cf18fc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF18FCu;
    {
        const bool branch_taken_0x1cf18fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18FCu;
        // 0x1cf1900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf18fc) {
            ctx->pc = 0x1CF18ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf18ec;
        }
    }
    ctx->pc = 0x1CF1904u;
    // 0x1cf1904: 0x0  nop
    ctx->pc = 0x1cf1904u;
    // NOP
    // 0x1cf1908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf190c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf190cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf1910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf1918: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf1918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf191c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf191cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1920: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1920u;
    SET_GPR_U32(ctx, 31, 0x1CF1928u);
    ctx->pc = 0x1CF1924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1920u;
    // 0x1cf1924: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1920u, 0x1CF1928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1928u;
label_1cf1928:
    // 0x1cf1928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf1928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf192c: 0xc73c7ce  jal         func_1CF1F38
    ctx->pc = 0x1CF192Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1934u);
    ctx->pc = 0x1CF1930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF192Cu;
    // 0x1cf1930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF1F38u, 0x1CF192Cu, 0x1CF1934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1934u;
label_1cf1934:
    // 0x1cf1934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf1934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1938: 0xc73bff4  jal         func_1CEFFD0
    ctx->pc = 0x1CF1938u;
    SET_GPR_U32(ctx, 31, 0x1CF1940u);
    ctx->pc = 0x1CF193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1938u;
    // 0x1cf193c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEFFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEFFD0u, 0x1CF1938u, 0x1CF1940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1940u;
label_1cf1940:
    // 0x1cf1940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf1940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1944: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1948: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf1948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf194c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf194cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf1950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1954: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf1954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1958: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1958u;
    SET_GPR_U32(ctx, 31, 0x1CF1960u);
    ctx->pc = 0x1CF195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1958u;
    // 0x1cf195c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1958u, 0x1CF1960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1960u;
label_1cf1960:
    // 0x1cf1960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf1960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf1968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf196c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cf196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf1970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1974: 0x873bd5c  j           func_1CEF570
    ctx->pc = 0x1CF1974u;
    ctx->pc = 0x1CF1978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1974u;
    // 0x1cf1978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    sub_01CEF570_0x1cef570(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF197Cu;
    // 0x1cf197c: 0x0  nop
    ctx->pc = 0x1cf197cu;
    // NOP
    ctx->pc = 0x1cf1980u;
}
