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

// Function: sub_01C21480
// Address: 0x1c21480 - 0x1c217b8
void sub_01C21480_0x1c21480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21480_0x1c21480");
#endif

    switch (ctx->pc) {
        case 0x1c214a4u: goto label_1c214a4;
        case 0x1c214bcu: goto label_1c214bc;
        case 0x1c214c0u: goto label_1c214c0;
        case 0x1c214e0u: goto label_1c214e0;
        case 0x1c214f0u: goto label_1c214f0;
        case 0x1c21528u: goto label_1c21528;
        case 0x1c2152cu: goto label_1c2152c;
        case 0x1c21568u: goto label_1c21568;
        case 0x1c215bcu: goto label_1c215bc;
        case 0x1c215c4u: goto label_1c215c4;
        case 0x1c21648u: goto label_1c21648;
        case 0x1c2166cu: goto label_1c2166c;
        case 0x1c21678u: goto label_1c21678;
        case 0x1c216c0u: goto label_1c216c0;
        case 0x1c216c8u: goto label_1c216c8;
        case 0x1c216e0u: goto label_1c216e0;
        case 0x1c21710u: goto label_1c21710;
        case 0x1c21718u: goto label_1c21718;
        case 0x1c21748u: goto label_1c21748;
        case 0x1c21774u: goto label_1c21774;
        case 0x1c21794u: goto label_1c21794;
        case 0x1c217a0u: goto label_1c217a0;
        default: break;
    }

    ctx->pc = 0x1c21480u;

    // 0x1c21480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c21484: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c21484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c21488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2148c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c2148cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c21490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c21490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21494: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c21494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c21498: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c21498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c2149c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2149Cu;
    SET_GPR_U32(ctx, 31, 0x1C214A4u);
    ctx->pc = 0x1C214A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2149Cu;
    // 0x1c214a0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2149Cu, 0x1C214A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C214A4u;
label_1c214a4:
    // 0x1c214a4: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c214a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c214a8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C214A8u;
    {
        const bool branch_taken_0x1c214a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C214ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214A8u;
        // 0x1c214ac: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c214a8) {
            ctx->pc = 0x1C214F8u;
            goto label_1c214f8;
        }
    }
    ctx->pc = 0x1C214B0u;
    // 0x1c214b0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c214b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c214b4: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C214B4u;
    {
        const bool branch_taken_0x1c214b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c214b4) {
            ctx->pc = 0x1C214D8u;
            goto label_1c214d8;
        }
    }
    ctx->pc = 0x1C214BCu;
label_1c214bc:
    // 0x1c214bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c214bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c214c0:
    // 0x1c214c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c214c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c214c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c214c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c214c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c214c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c214cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c214ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c214d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C214D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C214D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214D0u;
        // 0x1c214d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C214D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C214D8u;
label_1c214d8:
    // 0x1c214d8: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C214D8u;
    SET_GPR_U32(ctx, 31, 0x1C214E0u);
    ctx->pc = 0x1C214DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C214D8u;
    // 0x1c214dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C214D8u, 0x1C214E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C214E0u;
label_1c214e0:
    // 0x1c214e0: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C214E0u;
    {
        const bool branch_taken_0x1c214e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1c214e0) {
            ctx->pc = 0x1C214E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C214E0u;
            // 0x1c214e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C214C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c214c0;
        }
    }
    ctx->pc = 0x1C214E8u;
    // 0x1c214e8: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C214E8u;
    SET_GPR_U32(ctx, 31, 0x1C214F0u);
    ctx->pc = 0x1C214ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C214E8u;
    // 0x1c214ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C214E8u, 0x1C214F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C214F0u;
label_1c214f0:
    // 0x1c214f0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C214F0u;
    {
        const bool branch_taken_0x1c214f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C214F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214F0u;
        // 0x1c214f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c214f0) {
            ctx->pc = 0x1C214C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c214c0;
        }
    }
    ctx->pc = 0x1C214F8u;
label_1c214f8:
    // 0x1c214f8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1c214f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c214fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c214fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21500: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c21500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c21504: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1c21504u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c21508: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c21508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c2150c: 0x11cf0034  beq         $t6, $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C2150Cu;
    {
        const bool branch_taken_0x1c2150c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C21510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2150Cu;
        // 0x1c21510: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2150c) {
            ctx->pc = 0x1C215E0u;
            goto label_1c215e0;
        }
    }
    ctx->pc = 0x1C21514u;
    // 0x1c21514: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1c21514u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c21518: 0x11e0002f  beqz        $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x1C21518u;
    {
        const bool branch_taken_0x1c21518 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21518u;
        // 0x1c2151c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21518) {
            ctx->pc = 0x1C215D8u;
            goto label_1c215d8;
        }
    }
    ctx->pc = 0x1C21520u;
    // 0x1c21520: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C21520u;
    {
        const bool branch_taken_0x1c21520 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21520u;
        // 0x1c21524: 0x3c0f01c3  lui         $t7, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21520) {
            ctx->pc = 0x1C21574u;
            goto label_1c21574;
        }
    }
    ctx->pc = 0x1C21528u;
label_1c21528:
    // 0x1c21528: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1c21528u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1c2152c:
    // 0x1c2152c: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C2152Cu;
    {
        const bool branch_taken_0x1c2152c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C21530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2152Cu;
        // 0x1c21530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2152c) {
            ctx->pc = 0x1C214C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c214c0;
        }
    }
    ctx->pc = 0x1C21534u;
    // 0x1c21534: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c21534u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c21538: 0x3c0e01c3  lui         $t6, 0x1C3
    ctx->pc = 0x1c21538u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
    // 0x1c2153c: 0x25ce9380  addiu       $t6, $t6, -0x6C80
    ctx->pc = 0x1c2153cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939520));
    // 0x1c21540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21544: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c21544u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c21548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2154c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c2154cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c21550: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21554: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c21554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2155c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c2155cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21560: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21560u;
    SET_GPR_U32(ctx, 31, 0x1C21568u);
    ctx->pc = 0x1C21564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21560u;
    // 0x1c21564: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21560u, 0x1C21568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21568u;
label_1c21568:
    // 0x1c21568: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21568u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2156c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C2156Cu;
    {
        const bool branch_taken_0x1c2156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2156Cu;
        // 0x1c21570: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2156c) {
            ctx->pc = 0x1C214BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c214bc;
        }
    }
    ctx->pc = 0x1C21574u;
label_1c21574:
    // 0x1c21574: 0x25eff5b0  addiu       $t7, $t7, -0xA50
    ctx->pc = 0x1c21574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964656));
    // 0x1c21578: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c21578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2157c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c2157cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c21580: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C21580u;
    {
        const bool branch_taken_0x1c21580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C21584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21580u;
        // 0x1c21584: 0x3c0f01c3  lui         $t7, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21580) {
            ctx->pc = 0x1C21528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21528;
        }
    }
    ctx->pc = 0x1C21588u;
    // 0x1c21588: 0x25eff5b4  addiu       $t7, $t7, -0xA4C
    ctx->pc = 0x1c21588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964660));
    // 0x1c2158c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c2158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c21590: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c21590u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c21594: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1C21594u;
    {
        const bool branch_taken_0x1c21594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c21594) {
            ctx->pc = 0x1C21598u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21594u;
            // 0x1c21598: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2152Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2152c;
        }
    }
    ctx->pc = 0x1C2159Cu;
    // 0x1c2159c: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c2159cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c215a0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c215a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c215a4: 0x25eff5b8  addiu       $t7, $t7, -0xA48
    ctx->pc = 0x1c215a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964664));
    // 0x1c215a8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c215a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c215ac: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c215acu;
    { uint32_t bits = FAST_READ32(0x1C2F5B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c215b0: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c215b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c215b4: 0x25eff5bc  addiu       $t7, $t7, -0xA44
    ctx->pc = 0x1c215b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964668));
    // 0x1c215b8: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c215b8u;
    { uint32_t bits = FAST_READ32(0x1C2F5BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c215bc:
    // 0x1c215bc: 0xc707ef4  jal         func_1C1FBD0
    ctx->pc = 0x1C215BCu;
    SET_GPR_U32(ctx, 31, 0x1C215C4u);
    ctx->pc = 0x1C215C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C215BCu;
    // 0x1c215c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FBD0u, 0x1C215BCu, 0x1C215C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C215C4u;
label_1c215c4:
    // 0x1c215c4: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c215c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c215c8: 0x25eff5c0  addiu       $t7, $t7, -0xA40
    ctx->pc = 0x1c215c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964672));
    // 0x1c215cc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c215ccu;
    { uint32_t bits = FAST_READ32(0x1C2F5C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c215d0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x1C215D0u;
    {
        const bool branch_taken_0x1c215d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C215D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C215D0u;
        // 0x1c215d4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c215d0) {
            ctx->pc = 0x1C21528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21528;
        }
    }
    ctx->pc = 0x1C215D8u;
label_1c215d8:
    // 0x1c215d8: 0x55cfffd4  bnel        $t6, $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C215D8u;
    {
        const bool branch_taken_0x1c215d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c215d8) {
            ctx->pc = 0x1C215DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C215D8u;
            // 0x1c215dc: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2152Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2152c;
        }
    }
    ctx->pc = 0x1C215E0u;
label_1c215e0:
    // 0x1c215e0: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c215e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c215e4: 0x25eff5b0  addiu       $t7, $t7, -0xA50
    ctx->pc = 0x1c215e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964656));
    // 0x1c215e8: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c215e8u;
    { uint32_t bits = FAST_READ32(0x1C2F5B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c215ec: 0x46017834  c.lt.s      $f15, $f1
    ctx->pc = 0x1c215ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c215f0: 0x4500ffcd  bc1f        . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C215F0u;
    {
        const bool branch_taken_0x1c215f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C215F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C215F0u;
        // 0x1c215f4: 0x3c0f01c3  lui         $t7, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c215f0) {
            ctx->pc = 0x1C21528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21528;
        }
    }
    ctx->pc = 0x1C215F8u;
    // 0x1c215f8: 0x25eff5b4  addiu       $t7, $t7, -0xA4C
    ctx->pc = 0x1c215f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964660));
    // 0x1c215fc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c215fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c21600: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c21600u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c21604: 0x4503ffc9  bc1tl       . + 4 + (-0x37 << 2)
    ctx->pc = 0x1C21604u;
    {
        const bool branch_taken_0x1c21604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c21604) {
            ctx->pc = 0x1C21608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21604u;
            // 0x1c21608: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2152Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2152c;
        }
    }
    ctx->pc = 0x1C2160Cu;
    // 0x1c2160c: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c2160cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c21610: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1c21610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c21614: 0x25eff5b8  addiu       $t7, $t7, -0xA48
    ctx->pc = 0x1c21614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964664));
    // 0x1c21618: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1c21618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1c2161c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C2161Cu;
    {
        const bool branch_taken_0x1c2161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2161Cu;
        // 0x1c21620: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2161c) {
            ctx->pc = 0x1C215BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c215bc;
        }
    }
    ctx->pc = 0x1C21624u;
    // 0x1c21624: 0x0  nop
    ctx->pc = 0x1c21624u;
    // NOP
    // 0x1c21628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2162c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c21630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c21634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c21638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2163c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c2163cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21640: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21640u;
    SET_GPR_U32(ctx, 31, 0x1C21648u);
    ctx->pc = 0x1C21644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21640u;
    // 0x1c21644: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21640u, 0x1C21648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21648u;
label_1c21648:
    // 0x1c21648: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c21648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2164c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21650: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c21650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c21654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2165c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c2165cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21660: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21664: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21664u;
    SET_GPR_U32(ctx, 31, 0x1C2166Cu);
    ctx->pc = 0x1C21668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21664u;
    // 0x1c21668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21664u, 0x1C2166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2166Cu;
label_1c2166c:
    // 0x1c2166c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21670: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21670u;
    SET_GPR_U32(ctx, 31, 0x1C21678u);
    ctx->pc = 0x1C21674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21670u;
    // 0x1c21674: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21670u, 0x1C21678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21678u;
label_1c21678:
    // 0x1c21678: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c21678u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c2167c: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1c2167cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c21680: 0x25eff5c4  addiu       $t7, $t7, -0xA3C
    ctx->pc = 0x1c21680u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964676));
    // 0x1c21684: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c21684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c21688: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c21688u;
    { uint32_t bits = FAST_READ32(0x1C2F5C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2168c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c2168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c21690: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c21690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c21694: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c21694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c21698: 0x25eff5c8  addiu       $t7, $t7, -0xA38
    ctx->pc = 0x1c21698u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964680));
    // 0x1c2169c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c2169cu;
    { uint32_t bits = FAST_READ32(0x1C2F5C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1c216a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c216a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c216a4: 0x11cf002a  beq         $t6, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C216A4u;
    {
        const bool branch_taken_0x1c216a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C216A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C216A4u;
        // 0x1c216a8: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c216a4) {
            ctx->pc = 0x1C21750u;
            goto label_1c21750;
        }
    }
    ctx->pc = 0x1C216ACu;
    // 0x1c216ac: 0x11a0001c  beqz        $t5, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C216ACu;
    {
        const bool branch_taken_0x1c216ac = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C216B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C216ACu;
        // 0x1c216b0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c216ac) {
            ctx->pc = 0x1C21720u;
            goto label_1c21720;
        }
    }
    ctx->pc = 0x1C216B4u;
    // 0x1c216b4: 0x51c00010  beql        $t6, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C216B4u;
    {
        const bool branch_taken_0x1c216b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c216b4) {
            ctx->pc = 0x1C216B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C216B4u;
            // 0x1c216b8: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C216F8u;
            goto label_1c216f8;
        }
    }
    ctx->pc = 0x1C216BCu;
    // 0x1c216bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c216bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1c216c0:
    // 0x1c216c0: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C216C0u;
    SET_GPR_U32(ctx, 31, 0x1C216C8u);
    ctx->pc = 0x1C216C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C216C0u;
    // 0x1c216c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C216C0u, 0x1C216C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C216C8u;
label_1c216c8:
    // 0x1c216c8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c216c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c216cc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c216ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c216d0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c216d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c216d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c216d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c216d8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C216D8u;
    SET_GPR_U32(ctx, 31, 0x1C216E0u);
    ctx->pc = 0x1C216DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C216D8u;
    // 0x1c216dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C216D8u, 0x1C216E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C216E0u;
label_1c216e0:
    // 0x1c216e0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c216e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c216e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c216e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c216e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c216e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c216ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c216ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c216f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C216F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C216F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C216F0u;
        // 0x1c216f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C216F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C216F8u;
label_1c216f8:
    // 0x1c216f8: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c216f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c216fc: 0x25eff5cc  addiu       $t7, $t7, -0xA34
    ctx->pc = 0x1c216fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964684));
    // 0x1c21700: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c21700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c21704: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1c21704u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1c21708: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1c21708u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1c2170c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c2170cu;
    { uint32_t bits = FAST_READ32(0x1C2F5CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c21710:
    // 0x1c21710: 0xc707ef4  jal         func_1C1FBD0
    ctx->pc = 0x1C21710u;
    SET_GPR_U32(ctx, 31, 0x1C21718u);
    ctx->pc = 0x1C1FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FBD0u, 0x1C21710u, 0x1C21718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21718u;
label_1c21718:
    // 0x1c21718: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C21718u;
    {
        const bool branch_taken_0x1c21718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21718u;
        // 0x1c2171c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21718) {
            ctx->pc = 0x1C216C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c216c0;
        }
    }
    ctx->pc = 0x1C21720u;
label_1c21720:
    // 0x1c21720: 0x55cfffe7  bnel        $t6, $t7, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C21720u;
    {
        const bool branch_taken_0x1c21720 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c21720) {
            ctx->pc = 0x1C21724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21720u;
            // 0x1c21724: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C216C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c216c0;
        }
    }
    ctx->pc = 0x1C21728u;
    // 0x1c21728: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c21728u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c2172c: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1c2172cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c21730: 0x25eff5c4  addiu       $t7, $t7, -0xA3C
    ctx->pc = 0x1c21730u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964676));
    // 0x1c21734: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1c21734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1c21738: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c21738u;
    { uint32_t bits = FAST_READ32(0x1C2F5C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2173c: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c2173cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c21740: 0x25eff5d0  addiu       $t7, $t7, -0xA30
    ctx->pc = 0x1c21740u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964688));
    // 0x1c21744: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1c21744u;
    { uint32_t bits = FAST_READ32(0x1C2F5D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1c21748:
    // 0x1c21748: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1C21748u;
    {
        const bool branch_taken_0x1c21748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21748u;
        // 0x1c2174c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21748) {
            ctx->pc = 0x1C21710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21710;
        }
    }
    ctx->pc = 0x1C21750u;
label_1c21750:
    // 0x1c21750: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x1C21750u;
    {
        const bool branch_taken_0x1c21750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21750u;
        // 0x1c21754: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21750) {
            ctx->pc = 0x1C21748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21748;
        }
    }
    ctx->pc = 0x1C21758u;
    // 0x1c21758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2175c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c2175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21760: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21764: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21768: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2176c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2176Cu;
    SET_GPR_U32(ctx, 31, 0x1C21774u);
    ctx->pc = 0x1C21770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2176Cu;
    // 0x1c21770: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2176Cu, 0x1C21774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21774u;
label_1c21774:
    // 0x1c21774: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c21774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c21778: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c21778u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c2177c: 0x25eff5d4  addiu       $t7, $t7, -0xA2C
    ctx->pc = 0x1c2177cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964692));
    // 0x1c21780: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c21780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c21784: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c21784u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c21788: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c21788u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2178c: 0xc707ef4  jal         func_1C1FBD0
    ctx->pc = 0x1C2178Cu;
    SET_GPR_U32(ctx, 31, 0x1C21794u);
    ctx->pc = 0x1C21790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2178Cu;
    // 0x1c21790: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FBD0u, 0x1C2178Cu, 0x1C21794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21794u;
label_1c21794:
    // 0x1c21794: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c21794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21798: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21798u;
    SET_GPR_U32(ctx, 31, 0x1C217A0u);
    ctx->pc = 0x1C2179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21798u;
    // 0x1c2179c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21798u, 0x1C217A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C217A0u;
label_1c217a0:
    // 0x1c217a0: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c217a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c217a4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c217a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c217a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c217a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c217ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c217acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c217b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C217B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C217B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C217B0u;
        // 0x1c217b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C217B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C217B8u;
}
