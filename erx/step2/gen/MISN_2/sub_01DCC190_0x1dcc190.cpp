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

// Function: sub_01DCC190
// Address: 0x1dcc190 - 0x1dcc378
void sub_01DCC190_0x1dcc190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC190_0x1dcc190");
#endif

    switch (ctx->pc) {
        case 0x1dcc1c4u: goto label_1dcc1c4;
        case 0x1dcc1d8u: goto label_1dcc1d8;
        case 0x1dcc1f8u: goto label_1dcc1f8;
        case 0x1dcc200u: goto label_1dcc200;
        case 0x1dcc248u: goto label_1dcc248;
        case 0x1dcc258u: goto label_1dcc258;
        case 0x1dcc2a8u: goto label_1dcc2a8;
        case 0x1dcc2d0u: goto label_1dcc2d0;
        case 0x1dcc310u: goto label_1dcc310;
        case 0x1dcc318u: goto label_1dcc318;
        default: break;
    }

    ctx->pc = 0x1dcc190u;

    // 0x1dcc190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dcc190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dcc194: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcc198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcc19c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcc19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcc1a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcc1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcc1a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dcc1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dcc1a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dcc1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dcc1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcc1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcc1b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1dcc1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1dcc1b4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcc1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcc1b8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcc1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcc1bc: 0xc772ecc  jal         func_1DCBB30
    ctx->pc = 0x1DCC1BCu;
    SET_GPR_U32(ctx, 31, 0x1DCC1C4u);
    ctx->pc = 0x1DCC1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC1BCu;
    // 0x1dcc1c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB30u, 0x1DCC1BCu, 0x1DCC1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC1C4u;
label_1dcc1c4:
    // 0x1dcc1c4: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc1c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dcc1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc1cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcc1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc1d0: 0xc772ed0  jal         func_1DCBB40
    ctx->pc = 0x1DCC1D0u;
    SET_GPR_U32(ctx, 31, 0x1DCC1D8u);
    ctx->pc = 0x1DCC1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC1D0u;
    // 0x1dcc1d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB40u, 0x1DCC1D0u, 0x1DCC1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC1D8u;
label_1dcc1d8:
    // 0x1dcc1d8: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc1d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc1dc: 0x24520390  addiu       $s2, $v0, 0x390
    ctx->pc = 0x1dcc1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1dcc1e0: 0x8e530014  lw          $s3, 0x14($s2)
    ctx->pc = 0x1dcc1e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1dcc1e4: 0x8dee05a4  lw          $t6, 0x5A4($t7)
    ctx->pc = 0x1dcc1e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1444)));
    // 0x1dcc1e8: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCC1E8u;
    {
        const bool branch_taken_0x1dcc1e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC1E8u;
        // 0x1dcc1ec: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc1e8) {
            ctx->pc = 0x1DCC1F8u;
            goto label_1dcc1f8;
        }
    }
    ctx->pc = 0x1DCC1F0u;
    // 0x1dcc1f0: 0xc772f46  jal         func_1DCBD18
    ctx->pc = 0x1DCC1F0u;
    SET_GPR_U32(ctx, 31, 0x1DCC1F8u);
    ctx->pc = 0x1DCBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBD18u, 0x1DCC1F0u, 0x1DCC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC1F8u;
label_1dcc1f8:
    // 0x1dcc1f8: 0xc773024  jal         func_1DCC090
    ctx->pc = 0x1DCC1F8u;
    SET_GPR_U32(ctx, 31, 0x1DCC200u);
    ctx->pc = 0x1DCC090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC090u, 0x1DCC1F8u, 0x1DCC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC200u;
label_1dcc200:
    // 0x1dcc200: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcc200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc204: 0x144f0033  bne         $v0, $t7, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DCC204u;
    {
        const bool branch_taken_0x1dcc204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC204u;
        // 0x1dcc208: 0x8f8c8030  lw          $t4, -0x7FD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc204) {
            ctx->pc = 0x1DCC2D4u;
            goto label_1dcc2d4;
        }
    }
    ctx->pc = 0x1DCC20Cu;
    // 0x1dcc20c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1dcc20cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dcc210: 0x20c7821  addu        $t7, $s0, $t4
    ctx->pc = 0x1dcc210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x1dcc214: 0x8dee00e4  lw          $t6, 0xE4($t7)
    ctx->pc = 0x1dcc214u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 228)));
    // 0x1dcc218: 0x8dcd03a4  lw          $t5, 0x3A4($t6)
    ctx->pc = 0x1dcc218u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 932)));
    // 0x1dcc21c: 0x240f007a  addiu       $t7, $zero, 0x7A
    ctx->pc = 0x1dcc21cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1dcc220: 0x55af002d  bnel        $t5, $t7, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DCC220u;
    {
        const bool branch_taken_0x1dcc220 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dcc220) {
            ctx->pc = 0x1DCC224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC220u;
            // 0x1dcc224: 0x8e2f0248  lw          $t7, 0x248($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC2D8u;
            goto label_1dcc2d8;
        }
    }
    ctx->pc = 0x1DCC228u;
    // 0x1dcc228: 0x918f0428  lbu         $t7, 0x428($t4)
    ctx->pc = 0x1dcc228u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1064)));
    // 0x1dcc22c: 0x55e0002a  bnel        $t7, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DCC22Cu;
    {
        const bool branch_taken_0x1dcc22c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc22c) {
            ctx->pc = 0x1DCC230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC22Cu;
            // 0x1dcc230: 0x8e2f0248  lw          $t7, 0x248($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC2D8u;
            goto label_1dcc2d8;
        }
    }
    ctx->pc = 0x1DCC234u;
    // 0x1dcc234: 0xa1820428  sb          $v0, 0x428($t4)
    ctx->pc = 0x1dcc234u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1064), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dcc238: 0x26840390  addiu       $a0, $s4, 0x390
    ctx->pc = 0x1dcc238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 912));
    // 0x1dcc23c: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x1dcc23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1dcc240: 0xc772ec8  jal         func_1DCBB20
    ctx->pc = 0x1DCC240u;
    SET_GPR_U32(ctx, 31, 0x1DCC248u);
    ctx->pc = 0x1DCC244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC240u;
    // 0x1dcc244: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB20u, 0x1DCC240u, 0x1DCC248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC248u;
label_1dcc248:
    // 0x1dcc248: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dcc248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc24c: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x1dcc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1dcc250: 0xc772ec8  jal         func_1DCBB20
    ctx->pc = 0x1DCC250u;
    SET_GPR_U32(ctx, 31, 0x1DCC258u);
    ctx->pc = 0x1DCC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC250u;
    // 0x1dcc254: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB20u, 0x1DCC250u, 0x1DCC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC258u;
label_1dcc258:
    // 0x1dcc258: 0x8f8c8030  lw          $t4, -0x7FD0($gp)
    ctx->pc = 0x1dcc258u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc25c: 0x20c7821  addu        $t7, $s0, $t4
    ctx->pc = 0x1dcc25cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x1dcc260: 0x8dee00e4  lw          $t6, 0xE4($t7)
    ctx->pc = 0x1dcc260u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 228)));
    // 0x1dcc264: 0x8dcd03a4  lw          $t5, 0x3A4($t6)
    ctx->pc = 0x1dcc264u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 932)));
    // 0x1dcc268: 0x240f0070  addiu       $t7, $zero, 0x70
    ctx->pc = 0x1dcc268u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1dcc26c: 0x55af001a  bnel        $t5, $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DCC26Cu;
    {
        const bool branch_taken_0x1dcc26c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dcc26c) {
            ctx->pc = 0x1DCC270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC26Cu;
            // 0x1dcc270: 0x8e2f0248  lw          $t7, 0x248($s1) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC2D8u;
            goto label_1dcc2d8;
        }
    }
    ctx->pc = 0x1DCC274u;
    // 0x1dcc274: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dcc274u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dcc278: 0x26840768  addiu       $a0, $s4, 0x768
    ctx->pc = 0x1dcc278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1896));
    // 0x1dcc27c: 0x25efd784  addiu       $t7, $t7, -0x287C
    ctx->pc = 0x1dcc27cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956932));
    // 0x1dcc280: 0x240500ed  addiu       $a1, $zero, 0xED
    ctx->pc = 0x1dcc280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
    // 0x1dcc284: 0xc5f40000  lwc1        $f20, 0x0($t7)
    ctx->pc = 0x1dcc284u;
    { uint32_t bits = FAST_READ32(0x1DCD784u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dcc288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dcc288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcc28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc290: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dcc290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc294: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcc294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcc298: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcc298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc29c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1dcc29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcc2a0: 0xc772eca  jal         func_1DCBB28
    ctx->pc = 0x1DCC2A0u;
    SET_GPR_U32(ctx, 31, 0x1DCC2A8u);
    ctx->pc = 0x1DCC2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC2A0u;
    // 0x1dcc2a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB28u, 0x1DCC2A0u, 0x1DCC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC2A8u;
label_1dcc2a8:
    // 0x1dcc2a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dcc2a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcc2ac: 0x26240768  addiu       $a0, $s1, 0x768
    ctx->pc = 0x1dcc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1896));
    // 0x1dcc2b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1dcc2b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1dcc2b4: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x1dcc2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1dcc2b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dcc2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dcc2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc2c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dcc2c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc2c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dcc2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc2c8: 0xc772eca  jal         func_1DCBB28
    ctx->pc = 0x1DCC2C8u;
    SET_GPR_U32(ctx, 31, 0x1DCC2D0u);
    ctx->pc = 0x1DCC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC2C8u;
    // 0x1dcc2cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB28u, 0x1DCC2C8u, 0x1DCC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC2D0u;
label_1dcc2d0:
    // 0x1dcc2d0: 0x8f8c8030  lw          $t4, -0x7FD0($gp)
    ctx->pc = 0x1dcc2d0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
label_1dcc2d4:
    // 0x1dcc2d4: 0x8e2f0248  lw          $t7, 0x248($s1)
    ctx->pc = 0x1dcc2d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
label_1dcc2d8:
    // 0x1dcc2d8: 0x8ded4864  lw          $t5, 0x4864($t7)
    ctx->pc = 0x1dcc2d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dcc2dc: 0x8dae0480  lw          $t6, 0x480($t5)
    ctx->pc = 0x1dcc2dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1152)));
    // 0x1dcc2e0: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x1dcc2e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dcc2e4: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCC2E4u;
    {
        const bool branch_taken_0x1dcc2e4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCC2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC2E4u;
        // 0x1dcc2e8: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc2e4) {
            ctx->pc = 0x1DCC2F8u;
            goto label_1dcc2f8;
        }
    }
    ctx->pc = 0x1DCC2ECu;
    // 0x1dcc2ec: 0x11cf0002  beq         $t6, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DCC2ECu;
    {
        const bool branch_taken_0x1dcc2ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC2ECu;
        // 0x1dcc2f0: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc2ec) {
            ctx->pc = 0x1DCC2F8u;
            goto label_1dcc2f8;
        }
    }
    ctx->pc = 0x1DCC2F4u;
    // 0x1dcc2f4: 0xadaf0480  sw          $t7, 0x480($t5)
    ctx->pc = 0x1dcc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 1152), GPR_U32(ctx, 15));
label_1dcc2f8:
    // 0x1dcc2f8: 0x266ffeb1  addiu       $t7, $s3, -0x14F
    ctx->pc = 0x1dcc2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966961));
    // 0x1dcc2fc: 0x2def0006  sltiu       $t7, $t7, 0x6
    ctx->pc = 0x1dcc2fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dcc300: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DCC300u;
    {
        const bool branch_taken_0x1dcc300 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC300u;
        // 0x1dcc304: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc300) {
            ctx->pc = 0x1DCC350u;
            goto label_1dcc350;
        }
    }
    ctx->pc = 0x1DCC308u;
    // 0x1dcc308: 0x8d8e00dc  lw          $t6, 0xDC($t4)
    ctx->pc = 0x1dcc308u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 220)));
    // 0x1dcc30c: 0xadcf0cd8  sw          $t7, 0xCD8($t6)
    ctx->pc = 0x1dcc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 15));
label_1dcc310:
    // 0x1dcc310: 0xc772fa2  jal         func_1DCBE88
    ctx->pc = 0x1DCC310u;
    SET_GPR_U32(ctx, 31, 0x1DCC318u);
    ctx->pc = 0x1DCC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC310u;
    // 0x1dcc314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBE88u, 0x1DCC310u, 0x1DCC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC318u;
label_1dcc318:
    // 0x1dcc318: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcc318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc31c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dcc31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcc320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcc320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc324: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dcc324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcc328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcc328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcc32c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcc32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcc330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcc330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcc334: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dcc334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dcc338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcc338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcc33c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dcc33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcc340: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcc340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcc344: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1dcc344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dcc348: 0x8772ee0  j           func_1DCBB80
    ctx->pc = 0x1DCC348u;
    ctx->pc = 0x1DCC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC348u;
    // 0x1dcc34c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB80u;
    sub_01DCBB80_0x1dcbb80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCC350u;
label_1dcc350:
    // 0x1dcc350: 0x8d8f00dc  lw          $t7, 0xDC($t4)
    ctx->pc = 0x1dcc350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 220)));
    // 0x1dcc354: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DCC354u;
    {
        const bool branch_taken_0x1dcc354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC354u;
        // 0x1dcc358: 0xade00cd8  sw          $zero, 0xCD8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc354) {
            ctx->pc = 0x1DCC310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcc310;
        }
    }
    ctx->pc = 0x1DCC35Cu;
    // 0x1dcc35c: 0x0  nop
    ctx->pc = 0x1dcc35cu;
    // NOP
    // 0x1dcc360: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc360u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc364: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1dcc364u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcc368: 0xaf80802c  sw          $zero, -0x7FD4($gp)
    ctx->pc = 0x1dcc368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 0));
    // 0x1dcc36c: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1dcc36cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcc370: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC370u;
        // 0x1dcc374: 0xadae0cd8  sw          $t6, 0xCD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC378u;
}
