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

// Function: sub_01D00020
// Address: 0x1d00020 - 0x1d000b8
void sub_01D00020_0x1d00020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00020_0x1d00020");
#endif

    switch (ctx->pc) {
        case 0x1d00038u: goto label_1d00038;
        case 0x1d0004cu: goto label_1d0004c;
        case 0x1d00054u: goto label_1d00054;
        default: break;
    }

    ctx->pc = 0x1d00020u;

    // 0x1d00020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d00020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d00024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d00024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d00028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d00028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0002c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d00030: 0xc73f50a  jal         func_1CFD428
    ctx->pc = 0x1D00030u;
    SET_GPR_U32(ctx, 31, 0x1D00038u);
    ctx->pc = 0x1D00034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00030u;
    // 0x1d00034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD428u, 0x1D00030u, 0x1D00038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00038u;
label_1d00038:
    // 0x1d00038: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d00038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d0003c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0003cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d00040: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d00040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d00044: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1D00044u;
    SET_GPR_U32(ctx, 31, 0x1D0004Cu);
    ctx->pc = 0x1D00048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00044u;
    // 0x1d00048: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1D00044u, 0x1D0004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0004Cu;
label_1d0004c:
    // 0x1d0004c: 0xc73f750  jal         func_1CFDD40
    ctx->pc = 0x1D0004Cu;
    SET_GPR_U32(ctx, 31, 0x1D00054u);
    ctx->pc = 0x1D00050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0004Cu;
    // 0x1d00050: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD40u, 0x1D0004Cu, 0x1D00054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D00054u;
label_1d00054:
    // 0x1d00054: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D00054u;
    {
        const bool branch_taken_0x1d00054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d00054) {
            ctx->pc = 0x1D00058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D00054u;
            // 0x1d00058: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D000A8u;
            goto label_1d000a8;
        }
    }
    ctx->pc = 0x1D0005Cu;
    // 0x1d0005c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1d0005cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d00060: 0x55e00011  bnel        $t7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D00060u;
    {
        const bool branch_taken_0x1d00060 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d00060) {
            ctx->pc = 0x1D00064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D00060u;
            // 0x1d00064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D000A8u;
            goto label_1d000a8;
        }
    }
    ctx->pc = 0x1D00068u;
    // 0x1d00068: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1d00068u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0006c: 0x3c0d01d1  lui         $t5, 0x1D1
    ctx->pc = 0x1d0006cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)465 << 16));
    // 0x1d00070: 0x8e0e000c  lw          $t6, 0xC($s0)
    ctx->pc = 0x1d00070u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d00074: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x1d00074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1d00078: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d00078u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0007c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0007cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d00080: 0x25adbc7c  addiu       $t5, $t5, -0x4384
    ctx->pc = 0x1d00080u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294950012));
    // 0x1d00084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d00084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d00088: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d00088u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0008c: 0xc5ac0000  lwc1        $f12, 0x0($t5)
    ctx->pc = 0x1d0008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d00090: 0x8de50048  lw          $a1, 0x48($t7)
    ctx->pc = 0x1d00090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x1d00094: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d00094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d00098: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d00098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0009c: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1d0009cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d000a0: 0x873f752  j           func_1CFDD48
    ctx->pc = 0x1D000A0u;
    ctx->pc = 0x1D000A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D000A0u;
    // 0x1d000a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD48u;
    sub_01CFDD48_0x1cfdd48(rdram, ctx, runtime); return;
    ctx->pc = 0x1D000A8u;
label_1d000a8:
    // 0x1d000a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d000a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d000ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d000acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d000b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D000B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D000B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D000B0u;
        // 0x1d000b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D000B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D000B8u;
}
